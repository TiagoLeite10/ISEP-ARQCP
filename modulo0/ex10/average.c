int average_array(int v[], int n) {
	
	int avg = 0;

	for (int i = 0; i < n; i++) {
		avg += v[i];
	}
	
	return avg / n;

}
