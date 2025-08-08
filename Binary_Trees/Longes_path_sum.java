public class Longes_path_sum {
      int maxSum = 0;
    int maxLen = -1;
    private void solve(Node root , int len,int sum){
        if(root==null){
            if (len > maxLen) {
                maxLen = len;
                maxSum = sum;
            } else if (len == maxLen && sum > maxSum) {
                maxSum = sum;
            }
            return;
        }
        
        
        
        solve(root.left,len+1,sum+root.data);
        solve(root.right,len+1,sum+root.data);
        
        
        
    }
    public int sumOfLongRootToLeafPath(Node root) {
        
        solve(root,0,0);
        
        return maxSum;
    }
}
