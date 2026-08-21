class Solution {
    
    public int canWeAllocate(int[] arr, long pages){
        int students = 1;
        long pagesStudent = 0;
        
        for(int i=0; i<arr.length; i++){
            if(pagesStudent + arr[i] <= pages){
                pagesStudent += arr[i];
            }
            else{
                students++;
                pagesStudent = arr[i];
            }
        }
        return students;
    }
    
    public int findPages(int[] arr, int k) {
        // code here
        if(k > arr.length) return -1;
        
        long low = Integer.MIN_VALUE;
        long high = 0;
        for(int x : arr){
            low = Math.max(x,low);
            high += x;
        }
        
        while(low <= high){
            
            long pages = low + (high-low)/2;
            
            int noOfStudents = canWeAllocate(arr,pages);
            
            if(noOfStudents > k){
                low = pages + 1;
            }
            else high = pages-1;
        }
        
        return (int)low;
    }
}