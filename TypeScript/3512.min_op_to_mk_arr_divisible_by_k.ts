function minOperations(nums: number[], k: number): number {
    let sum=0,count=0;
      for(let i=0;i<nums.length;i++){
        sum+=nums[i];
       } 
       while(sum%k!=0){
        if(sum%k!=0){
            sum=sum-1;
            count++;
        }
       }
       return count;
};