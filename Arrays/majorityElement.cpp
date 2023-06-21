int majorityElement(int arr[], int n)
    {
        
        // your code here
        int res =0, count =1;
        for(int i=1;i<n;i++){
            if(arr[res]==arr[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res = i;
                count = 1;
            }
        }
        count = 0;
        for(int i=0;i<n;i++){
            if(arr[res]==arr[i]){
                count++;
            }
        }
        // for(int i=n-1;i>=0;i--){
        //     if(arr[res]==arr[i]){
        //         res = i;
        //         break;
        //     }
        // }
        if(count<=n/2) return -1;
        return arr[res];
        
    }
