# Matrix feedback

## errors
* pouzivat `const` funkce, napriklad `print() const, get() const, ...`
  * const za jmenem
* pojmenovat typy (`using`), matrix, vector, ....
* pouzivat rovnou unsigned typy misto `int + assert()` (https://gitlab.mff.cuni.cz/teaching/nprg041/2022-23/faltin/bakhtia/-/blob/master/hm02-03/main.cpp#L67)
* `sort_vector()` by mela mit stejne parametry jako `get_vector()`
* Nepouzivat `new` 
* kdyz kopie pri sortovani, tak pouzit funkci
* vlozit `using` dovnitr tridy
* std::function<bool(int)>
* male typy (`int`, `double`, `bool`) pouzivat radeji naprimo
* pouzit enum
* pouzit definovane typy/tridy (napr `matrix_t` misto `vector<vector<int>>`
* pouziti char na osy
* jedna funkce `get_matrix()` a `get_vector()`

## code
```
DDDMatrix(){
    // By default, the matrix is initialized 3x3x3
    int_3dMatrix_t m(3, int_matrix_t(3, int_vector_t(3)));
}

get_matrix(const std::string &axis, const int &index)

vector<vector<int> > Matrix3d::get_matrix(int index, int axis) {
    int x = axis == 0 ? index : this->x;
    int y = axis == 1 ? index : this->y;
    int z = axis == 2 ? index : this->z;
    vector<vector<int> > output;
    if (axis == 2) 
        output = vector<vector<int> >(y, vector<int>(x));
    else if (axis == 1)
        output = vector<vector<int> >(z, vector<int>(x));
    else if (axis == 0)
        output = vector<vector<int> >(z, vector<int>(y));

    for (int i = 0; i < this->matrix.size(); i++) {
        for(int j = 0; j < this->matrix[i].size(); j++) {
            for(int k = 0; k < this->matrix[i][j].size(); k++) {
                if (x == i && axis == 0)
                    output[j][k] = this->matrix[i][j][k];
                else if (y == j && axis == 1)
                    output[i][k] = this->matrix[i][j][k];
                else if ( z == k && axis == 2)
                    output[i][j] = this->matrix[i][j][k];
            }
        }
    }
    return output;
}

vector<int> Matrix3d::get_vector(int index1, int index2, int axis1, int axis2) {
    int x = axis1 == 0 ? index1 : this->x;
    int y;
    if (axis1 == 1)
        y = index1;
    else if (axis2 == 1)
        y = index2;
    else
        y = this->y;
    int z = axis2 == 2 ? index2 : this->z;
    vector<int> output;
    if (axis1 == 0 && axis2 == 1)
        output = vector<int>(z);
    else if (axis1 == 1 && axis2 == 2)
        output = vector<int>(x);
    else if (axis1 == 2 && axis2 == 0)  
        output = vector<int>(y);
    for (int i = 0; i < this->matrix.size(); i++) {
        for(int j = 0; j < this->matrix[i].size(); j++) {
            for(int k = 0; k < this->matrix[i][j].size(); k++) {
                if (x == i && axis1 == 0 && axis2 == 1 && y == j)
                    output[k] = this->matrix[i][j][k];
                else if (y == j && axis1 == 1 && axis2 == 2 && z == k)
                    output[i] = this->matrix[i][j][k];
                else if ( z == k && axis1 == 2 && axis2 == 0 && x == i)
                    output[j] = this->matrix[i][j][k];
            }
        }
    }
    return output;
}
```