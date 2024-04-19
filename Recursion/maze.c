#include<stdio.h>

int maze(int cr, int cc, int er, int ec){
    if(cr == er && cc == ec)
        return 1; // reached the end of maze
    if(cr > er || cc > ec)
        return 0; // out of bounds
    
    int rightway = 0;
    int downway = 0;
    
    // Check if moving right is possible
    if(cc < ec)
        rightway = maze(cr, cc + 1, er, ec);
    
    // Check if moving down is possible
    if(cr < er)
        downway = maze(cr + 1, cc, er, ec);
    
    // Total ways to reach end
    int totalways = rightway + downway;
    return totalways;
}

int main(){
    int n, m;
    printf("Enter the number of rows in the maze: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the maze: ");
    scanf("%d", &m);
    
    int nofways = maze(1, 1, n, m); // Assuming maze starts from (1,1)
    printf("Total number of ways to traverse the maze: %d", nofways);
    return 0;
}
