void insertionSort2(int n, vector<int> arr) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
}
