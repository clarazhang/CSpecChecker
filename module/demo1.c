extern void *memset(void *, int, unsigned int);
extern void *malloc(unsigned int);

static void Zero(void *Base, int Count) {
	memset(Base, 0, Count);
}

// C[0:N] = A[0:N] + B
char *Add1(const char *A, char B, int N) {
	if (!A || N < 0) {
		return (char *)0;
	}
	char *C = malloc(1);
	if (!C) {
		return (char *)0;
	}
	Zero(C, N);
	for (int I = 0; I != N; I++) {
		C[I] = A[I] + B;
	}
	return C;
}