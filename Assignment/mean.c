#include <stdio.h>
#include <math.h>
int main(){
    int n,i,sum=0,sum2=0;
    float mean, var, stddev;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n],arr2[n];
    for (i = 0; i<n; i++){
    printf("Enter element %d : ", i);
    scanf("%d", &arr[i]);
    }
    for (i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    mean = sum*1.0/n;
    printf("Mean: %.4f\n", mean);
    for (i = 0; i<n; i++){
        arr2[i] = pow(arr[i]-mean, 2);
    }
    for (i = 0; i<n; i++){
        sum2 = sum2 + arr2[i];
    }
    var = sum2*1.0/n;
    stddev = pow(var, 0.5);
    printf("Standard Deviation: %.4f", stddev);
    return 0;
}
