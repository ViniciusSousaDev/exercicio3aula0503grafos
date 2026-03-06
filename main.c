#include <stdio.h>

#define V 7

int mAdj[V][V];

int main() {
    //vertice 1
    mAdj[0][1] = 1;
    mAdj[0][2] = 1;
    mAdj[0][3] = 1;
    //vertice 2
    mAdj[1][0] = 1;
    mAdj[1][2] = 1;
    mAdj[1][4] = 1;
    //vertice 3
    mAdj[2][1] = 1;
    mAdj[2][3] = 1;
    mAdj[2][0] = 1;
    //vertice 4
    mAdj[3][1] = 1;
    mAdj[3][2] = 1;
    mAdj[3][0] = 1;



    int i, j;

    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            printf("%d\t", mAdj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
