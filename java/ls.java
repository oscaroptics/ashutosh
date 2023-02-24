import java.util.*;
class Main{
    public static int linearsearch(int num[], int key)
    {
        for(int i=0; i<num.length; i++)
        {
            if(num[i] == key)
            {
                return i;
            }
        }
        return 0;
    }
    public static void main(String args[]){
        int num[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        int key = 10;
        
        int index = linearsearch(num, key);
        if(index == 0)
        {
            System.out.println("Not found");
        } else{
            System.out.println("key is at index" + index);
        }
    }
}