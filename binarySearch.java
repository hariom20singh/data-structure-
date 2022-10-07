public class BinarySearch {
    public static void merge(int[] arr, int l, int m, int r)
    {
        // n1 and n2 are the sizes of two sorted subarrays
        int n1 = m - l + 1;
        int n2 = r - m;

        // create two arrays for the left and right sorted subarrays
        int[] left = new int[n1];
        int[] right = new int[n2];

        //copying the data from main array to the subarrays
        for (int i = 0; i < n1; ++i)
            left[i] = arr[l + i];
        for (int i = 0; i < n2; ++i)
            right[i] = arr[m + 1 + i];

        // i is starting pointer in the left subarray
        // j is the starting pointer in the right subarray
        int i = 0, j = 0;

        // k is the initial index of the final merged array
        int k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        // if there are another elements remaining in the left array just copy them in the final sorted array
        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        // if there are another elements remaining in the left array just copy them in the final sorted array
        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] arr, int l, int r)
    {
        if (l < r) {
            // m is the middle pointer
            int m = l + (r - l) / 2;

            // for sorting the left sub-array
            mergeSort(arr, l, m);
            // for sorting the right sub-array
            mergeSort(arr, m + 1, r);

            // merging the left and right sub-arrays
            merge(arr, l, m, r);
        }
    }

    // main function
    public static void main(String args[])
    {
        int[] arr = { 9, 4, 7, 6, 3, 1, 5 };

        System.out.println("Array before sorting : ");
        for (int elm : arr){
            System.out.print(elm+" ");
        }
        mergeSort(arr,0, arr.length-1);
        System.out.println();
        System.out.println("Array after sorting : ");
        for (int elm : arr){
            System.out.print(elm+" ");
        }


    }
}
