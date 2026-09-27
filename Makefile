CC = cc
CFLAGS = -Wall -Wextra -std=c99 -g

# -MJ makes clang write the exact compile command as a json fragment,
# sed wraps it into a valid compile_commands.json for clangd
sha256: main.c
	$(CC) $(CFLAGS) -MJ .cc.json -o sha256 main.c
	@sed -e '1s/^/[/' -e '$$s/,$$/]/' .cc.json > compile_commands.json

run: sha256
	./sha256

clean:
	rm -f sha256 .cc.json compile_commands.json
	rm -rf sha256.dSYM

.PHONY: run clean
