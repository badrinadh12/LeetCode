int maxArea(int* height, int heightSize) {
    int max=0,diff,area;
        for(int i=0;i<heightSize-1;i++){
            for(int j=i+1;j<heightSize;j++){
                if((height[i]> height[j])||(height[i]==height[j])){
                    diff=j-i;
                    area=(height[j]*diff);
                
            
                }
                else{
                    diff=j-i;
                    area=(height[i]*diff);
                    
                }
                if(max<area){
                    max=area;
                }

            }
        
        }
     return max;
    
      
}