#include <iostream>

int ricerca_bin(int v[], int inf, int sup, int ele);

int main(){
    int lung_vett = 20;
    int vett[lung_vett] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int elemento_ricercato = 12;
    int posizione;

    std::cout << std::endl;
    if((posizione = ricerca_bin(vett, 0, lung_vett - 1, elemento_ricercato)) < 0){
        std::cout << "L'elemento non e' presente nel vettore.";
        std::cout << std::endl;
    }else{
        std::cout << "L'elemento si trova in: " << posizione + 1 << " posizione";
        std::cout << std::endl;
    }

    return 0;
}

// la funzione ritorna:
// > -1: l'indice del elemento cercato.
// -1: se l'elemento non viene trovato.
int ricerca_bin(int v[], int inf, int sup, int ele){

    if(inf > sup)                           // condizione di terminazione: elemento non trovato
        return -1;                          // istruzione di terminazione della ricorsione

    int pos = (inf + sup) / 2;              // calcolo del centro

    if(v[pos] == ele)                       // condizione di terminazione: elemento trovato
        return pos;                         // istruzione di terminazione della ricorsione

    if(v[pos] < ele)                        // cerco a destra
        inf = pos + 1;                      // passo di avvicinamento
    else                                    // altrimenti cerco a sinistra
        sup = pos - 1;                      // passo di avvicinamento

    return ricerca_bin(v, inf, sup, ele);   // chiamata ricorsiva

}
