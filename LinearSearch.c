#include <stdio.h>


// Linear Search
// int main() {
//     int vet[10] = {-2, 0, 3, 6, 7, 9, 11, 13, 14, 18};
//     int busca;

//     printf("What number are you looking for? ");
//     scanf("%d", & busca);

//     for (int i = 0; i < 10; i++) {
//         if (vet[i] == busca) {
//             printf("Number found in index %d", i);
//             break;
//         }
//         else if(vet[i] > busca) {
//             printf("Number not found");
//             break;
//         }
//     }

// }

// Binary Search

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int vet[] = {-2, 0, 3, 6, 7, 9, 11, 13, 14, 18};

    int n = sizeof(vet) / sizeof(vet[0]);

    int x;
    printf("What number are you looking for? ");
    scanf("%d", & x);

    int search = binarySearch(vet, 0, n - 1, x);

    if (search == -1) printf("Number not found");
    
    else printf("Number found in index %d", search);
}





























