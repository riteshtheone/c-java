public class Hcf{
    
    public static void main(String[] args){

        System.out.println("Hello java");

        int arr[] = {2,0,6,18,28};
        int n = arr.length;

        System.out.println("Hcf is:- " + findHcf(arr, n));
        

    }

    public static int findHcf(int arr[], int n){

        int result = arr[0];

        for(int i = 1; i < n; i++){
            if(result == 1) return result;
            result = hcf(arr[i], result);
        }
        return result;
    }

    public static int hcf(int a, int b){
        if(a == 0) return b;
        return hcf(b%a, a);
    }

}