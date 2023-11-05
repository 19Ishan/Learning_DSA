# include<iostream>

using namespace std;

void merge(int arr[], int s, int e){

    int mid = s + (e - s)/2;

    //ab mujhe lengths chahiye of the two new arrays
    //which I'll be creating

    int lenLeft = mid - s + 1; //length of the left array
    int lenRight = e - mid + 1 - 1; //length of the right array

    //1. Creation of these two arrays (dynamically)
    int * left = new int[lenLeft];
    int * right = new int[lenRight];

    //2. Copying the values from the original array into these two newly created arrays

    int k = s;
    //k is an index which shows 
    //the position of the left array values in the original array
    //means yeh wo wali values ki position ko show karta hai
    //which will be copied in the left array

    //left array mein values copy hogyi
    for(int i = 0 ; i < lenLeft ; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    //right array mein values copy karni hain
    for(int i = 0 ; i < lenRight ; i++){
        right[i] = arr[k];
        k++;
    }

    //3. Merge the Two Sorted Arrays

    //Conditions: The two arrays are already sorted , 

    //Approach: Yaha par hum Two Pointers Approach use kar rhe hain

    int leftIndex = 0; //left array ka index
    int rightIndex = 0; //right array ka index

    //IMPORTANT STEP YAHA PAR GALTI HOGI HUMESHA
    //main array ka starting index ZERO nhi hai
    //it is passed in the function as a parameter (s)
    int mainArrayIndex = s; 

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }

        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //ek condition aa sakti hai that left wala array exhaust hogya 
    //and right array mein still elements bache hain
    //so in this case just copy the leftover elements

    // A. Left array exhaust hogya
    while(rightIndex < lenRight){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    // B. Right array exhaust hogya
    while(leftIndex < lenLeft){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //4. Free the alloted memory
    delete[] left;
    delete[] right;

}

void mergeSort(int arr[], int s, int e){

    //base cases
    if(s > e){
        //invalid array
        return;
    }

    if(s == e){
        //single element
        return;
    }

    //1. Break thee array into two halves
    int mid = s + (e - s)/2;

    //2. Recursion ko bulao and left or right half ko sort karwao

    mergeSort(arr, s, mid); //recursive call for left half

    mergeSort(arr, mid + 1, e); //recursive call for right half

    //3. Merge the two sorted arrays
    merge(arr, s, e);
}

int main() {

    int arr[] = {2, 1, 6, 9, 5};
    int size = 5;
    int s = 0;
    int e = size - 1;

    cout << "Before Merge Sort: " << endl;

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, s, e);

    cout << "After Merge Sort: " << endl;

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}