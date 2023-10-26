int binarySearch(int arr[], int left, int right, int n)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
 
        if (arr[mid] == n)
            return mid;
 
        if (arr[mid] < n)
            left = mid + 1;
 
        else
            right = mid - 1;
    }
    return -1;
}
 
