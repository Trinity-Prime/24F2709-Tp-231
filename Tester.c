#include <stdio.h>
#include <stdbool.h>

bool trie(int tab[], int n){
    for(int i=0; i< n - 1; i++ ){
        if(tab[i]>tab[i+1]) return false;
    }
    return true;
}

int main(){
    int n;
    printf("Combien de valeurs allez vous entrez : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les %d elements :\n",  n);
    for(int i=0; i<n; i++){
        scanf("%d",&tab[i]);
    }
    if(trie(tab, n)) printf("Le tableau est trie en ordre croissant\n");
    else printf("Le tableau n'est pas trie\n");
    return 0;
}