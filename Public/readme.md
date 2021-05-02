### Modificadores de acceso en C ++

Los modificadores de acceso se utilizan para implementar un aspecto importante de la programación orientada a objetos conocido como ocultación de datos 

Hay 3 tipos de modificadores de acceso disponibles en C ++: 

- Público 
- Privado
- Protegido

Nota : Si no especificamos ningún modificador de acceso para los miembros dentro de la clase, por defecto el modificador de acceso para los miembros será Privado .

`Público` : Todos los miembros de la clase declarados bajo el especificador público estarán disponibles para todos. Los miembros de datos y las funciones de miembros declarados como públicos también pueden ser accedidos por otras clases y funciones. Se puede acceder a los miembros públicos de una clase desde cualquier lugar del programa utilizando el operador de acceso directo a miembros (.) Con el objeto de esa clase. <br>

`Privado` :  : Los miembros de la clase declarados como privados solo pueden ser accedidos por las funciones miembro dentro de la clase. No se permite que ningún objeto o función ajena a la clase acceda directamente a ellos. Solo las funciones de miembro o las funciones de amigo pueden acceder a los miembros de datos privados de una clase. <br>

`Protegido` : el modificador de acceso protegido es similar al modificador de acceso privado en el sentido de que no se puede acceder a él fuera de su clase a menos que con la ayuda de la clase amiga, la diferencia es que cualquier miembro de la clase declarado como protegido puede ser accedido por cualquier subclase (clase derivada) de esa clase también <br>

Fuente: [https://www.geeksforgeeks.org/](https://www.geeksforgeeks.org/access-modifiers-in-c/)