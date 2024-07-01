#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, initial, totalHeadMov = 0;

    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    int diskRequests[n];
    printf("Enter the disk requests:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &diskRequests[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &initial);

    for (int i = 0; i < n; i++) {
        totalHeadMov += abs(diskRequests[i] - initial);
        initial = diskRequests[i]; 
    }

    printf("Total Head Movement = %d\n", totalHeadMov);

    return 0;
}
