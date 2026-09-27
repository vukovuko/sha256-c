// sha256 in c, following the lecture: https://www.youtube.com/watch?v=PMbYh2ovx1k
// target: hash of "abc" is
// ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad
// check with: echo -n "abc" | shasum -a 256

#include <stdint.h>
#include <stdio.h>

// milestone 1: rotr macro + print hex, sanity check by hand
// milestone 2: choice, median, big sigma 0/1, little sigma 0/1
// milestone 3: k round constants + initial hash values h0..h7 (copy from spec)
// milestone 4: padding (one 0x80 byte, zeros, 64bit big endian length)
// milestone 5: bytes -> words big endian, message schedule w[64]
// milestone 6: main loop, working variables a..h, 64 rounds
// milestone 7: loop over chunks, print digest

int main(void) {
    uint32_t a = 0x0123abcd;
    printf("%08x\n", a);
    // TODO print rotr(a, 4), should be d0123abc
    return 0;
}
