extern void *memset(void *, int, unsigned int);
extern void *malloc(unsigned int);

static void Zero(void *Base, int Count) {
	memset(Base, 0, Count);
}

// C[0:N] = A[0:N] + B
char *Add0(const char *A, char B, int N) {
	char *C = malloc(N);
	Zero(C, N);
	for (int I = 0; I != N; I++) {
		C[I] = A[I] + B;
	}
	return C;
}