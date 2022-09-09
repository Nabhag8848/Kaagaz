import java.util.Arrays;

public class Searching {

    public static void main(String[] args) {

        int[] nums = { 23, 45, 1, 2, 8, 19, -3, 16, -11, 28 };
        int target = 19;
        int index = linearSearch(nums, target);

        System.out.println("For Array: " + Arrays.toString(nums));
        System.out.println(target + " found at index " + index);

        Arrays.sort(nums);
        System.out.println("For Sorted Array: " + Arrays.toString(nums));
        int ans = binarySearch(nums, target);
        System.out.println(target + " found at index " + ans);

        System.out.println("\n 20DCE063 -> Nabhag Motivaras");

    }

    static int linearSearch(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }

        for (int index = 0; index < arr.length; index++) {

            int element = arr[index];
            if (element == target) {
                return index;
            }
        }

        return -1;
    }

    static int binarySearch(int[] arr, int target) {

        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid;
            }
        }

        return -1;
    }

}