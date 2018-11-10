extern void *memset(void *array, int, unsigned int);

int func1(int arg) {
	
	int array[10] = {0};
	memset(array, 0, 10 * sizeof(int));
	
	array[0] = 1;
	array[0] = 0;

	if (arg) {
		array[0] = 2;
	} else {
		array[1] = 3;
	}

	return 0;
}