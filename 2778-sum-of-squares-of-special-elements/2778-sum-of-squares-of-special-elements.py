class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        sum=0
        n=len(nums)
        for i in range (n):
            print(i)
            if(n%(i+1)==0):
                sum+=(nums[i]*nums[i])
        return sum