## Funciones

Las funciones son un conjunto de procedimiento encapsulados en un bloque, usualmente reciben parámetros, cuyos valores utilizan para efectuar operaciones y adicionalmente retornan un valor. Esta definición proviene de la definición de función matemática la cual posee un dominio y un rango, es decir un conjunto de valores que puede tomar y un conjunto de valores que puede retornar luego de cualquier operación.

## Ejemplo

```c++
int sum(int a, int b)
{
    return a + b;
}
```

<p> e puede invocar la función o llamarla desde cualquier número de lugares del programa. Los valores que se pasan a la función son los argumentos, cuyos tipos deben ser compatibles con los tipos de parámetro de la definición de función. </p>

```c++
int main()
{
    int i = sum(10, 32);
    int j = sum(i, 66);
    cout << "The value of j is" << j << endl; // 108
}
```
