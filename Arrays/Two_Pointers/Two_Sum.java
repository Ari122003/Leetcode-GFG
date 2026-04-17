package Arrays.Two_Pointers;

import java.util.Arrays;

public class Two_Sum {
    public int[] twoSum(int[] nums, int target) {

        Arrays.sort(nums);

        int left = 0, right = nums.length - 1;

        int[] ans = new int[2];

        while (left < right) {

            int sum = nums[left] + nums[right];

            if (sum == target) {
                ans[0] = nums[left];
                ans[1] = nums[right];

                return ans;
            }

            if (sum < target) {
                left++;
            }

            else {
                right--;
            }
        }

        return ans;

    }
}
