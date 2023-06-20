public class Solution {
    public bool CanPlaceFlowers(int[] flowerbed, int n) {
        
        int flowerbeds = flowerbed.Length;

        int can_plant = 0;

        if(flowerbeds == 1 && flowerbed[0] == 0)
            return true;
        else if(flowerbeds==1 && flowerbed[0]==1)
        {
            if(n==0) return true;
            else return false;
        }
            
        if(flowerbed[0] == 0 && flowerbed[1]==0)
        {
            flowerbed[0] = 1;
            can_plant+=1;
        }

        

        for(int i=1; i<flowerbeds-1; i++)
        {
            if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i]!=1)
            {   
                can_plant+=1;
                flowerbed[i] = 1;
            }
        }
        if(flowerbeds>2)
        {
            if(flowerbed[flowerbeds-1] == 0 && flowerbed[flowerbeds-2]==0)
            {
                flowerbed[flowerbeds-1] = 1;
                can_plant+=1; 
            }
        }
        

        if(can_plant>=n)
            return true;
        else 
            return false;

    }
}