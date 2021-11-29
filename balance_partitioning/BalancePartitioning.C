#include <stdio.h>

int main()
{
    int n , ans, temp, diff = 999999999, sum;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++)
    scanf("%d", &arr[i]);
    
    for(int i = 0; i < n ; i++)
    sum += arr[i];
    
    for(int i = 0; i < n -1  ; i++){
        temp += arr[i];
        sum -= arr[i];
        
        if ((temp > sum) && (temp - sum) < diff){
            diff = temp - sum;
            ans = i + 1;
        }
        else
        if((temp < sum) && (- temp + sum) < diff){
            diff = -temp + sum;
            ans = i + 1;
        }
        else{
            ans = i+1;
            break;
        }
        
    }
    printf("%d",ans);
    

    return 0;
}