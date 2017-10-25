#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <class T>
void bubbleSort(T *vect, unsigned long tamanio){
    T aux;
    int flag = 0;

    while (flag == 0) {
        for (unsigned long int i = 0; i < tamanio - 1; i++) {

            for (unsigned long int j = 1; j < tamanio; j++) {

                if (vect[i] < vect[j]) {
                    aux = vect[i];
                    vect[i] = vect[j];
                    vect[j] = aux;
                    flag = 0;
                }else
                    flag = 1;
            }
        }
    }
}


#endif //BUBBLESORT_H
