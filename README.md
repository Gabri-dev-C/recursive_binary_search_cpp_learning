![C++](https://img.shields.io/badge/C++-Recursion-blue)
![License](https://img.shields.io/badge/License-MIT-green)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-yellow)
![Learning](https://img.shields.io/badge/Learning-C++-orange)

## Recursive binary search

Implementazione ricorsiva dell'algoritmo di ricerca binaria di uno specifico
elemento all'interno di un vettore.

## Componenti della ricorsione
1. **Condizioni di terminazione:** `if(inf > sup)` - `if(v[pos] == ele)`
2. **Istruzione di terminazione:** `return -1` - `return pos;`
3. **Passo di avvicinamento:** `inf = pos + 1` - `sup = pos - 1`
4. **Chiamata ricorsiva:** `return ricerca_seq(v, inf, sup, ele)`

# Utilizzo
1. Crea in Code::Blocks un nuovo progetto.
2. Copia il codice sorgente.
3. Compila ed esegui.

# Codice sorgente
```cpp
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

```

# Note
- L'array deve essere ordinato per il corretto funzionamento.
- Divisione intera per calcolare il centro.
- Ricorsione su intervallo[inf,sup].

# Output
![Risultato della ricerca](immagini/cattura_1.PNG)

# Autore
Gabriele Henriet - [GitHub](https://github.com/Gabri-dev-C)

# Licenza
MIT License
