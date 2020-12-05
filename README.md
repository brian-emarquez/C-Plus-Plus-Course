
<h2 align="center">Learn C++ Object Oriented Programming - 0 to Hero 🦸‍♂️</h2>


<p align="center">
  
  <a href="https://github.com/BrianMarquez3/C-Plus-Plus-Course/tags">
    <img src="https://img.shields.io/github/tag/BrianMarquez3/C-Plus-Plus-Course.svg?label=version&style=flat" alt="Version">
  </a>
  <a href="https://github.com/BrianMarquez3/C-Plus-Plus-Course/stargazers">
    <img src="https://img.shields.io/github/stars/BrianMarquez3/C-Plus-Plus-Course.svg?style=flat" alt="Stars">
  </a>
  <a href="https://github.com/BrianMarquez3/C-Plus-Plus-Course/network">
    <img src="https://img.shields.io/github/forks/BrianMarquez3/C-Plus-Plus-Course.svg?style=flat" alt="Forks">
  </a>
  <a href="https://github.com/BrianMarquez3/C-Plus-Plus-Course/network">
    <img src="https://img.shields.io/badge/coverage-80%25-yellowgreen">
  </a>
  
  
<!--- code coverage percentage: ![coverage](https://img.shields.io/badge/coverage-80%25-yellowgreen)
- stable release version: ![version](https://img.shields.io/badge/version-1.2.3-blue)
- package manager release: ![gem](https://img.shields.io/badge/gem-2.2.0-blue)
- status of third-party dependencies: ![dependencies](https://img.shields.io/badge/dependencies-out%20of%20date-orange)
- static code analysis grade: ![codacy](https://img.shields.io/badge/codacy-B-green)
- [SemVer](https://semver.org/) version observance: ![semver](https://img.shields.io/badge/semver-2.0.0-blue)
- amount of [Liberapay](https://liberapay.com/) donations per week: ![receives](https://img.shields.io/badge/receives-2.00%20USD%2Fweek-yellow)
- Python package downloads: ![downloads](https://img.shields.io/badge/downloads-13k%2Fmonth-brightgreen)
- Chrome Web Store extension rating: ![rating](https://img.shields.io/badge/rating-★★★★☆-brightgreen)
- [Uptime Robot](https://uptimerobot.com) percentage: ![uptime](https://img.shields.io/badge/uptime-100%25-brightgreen)-->
  
   
  <!--programa modificacion-->
  <!--<a href="https://david-dm.org/StylishThemes/GitHub-Dark?type=dev">
    <img src="https://img.shields.io/david/dev/StylishThemes/GitHub-Dark.svg?label=devDependencies&style=flat" alt="devDependencies">
  </a>
  <a href="https://gitter.im/StylishThemes/GitHub-Dark">
    <img src="https://img.shields.io/gitter/room/StylishThemes/Github-Dark.js.svg?maxAge=2592000&style=flat" alt="Gitter">
  </a>-->
</p>

![c++](./images/c++.jpg)

Es un lenguaje de programación diseñado en 1979 por Bjarne Stroustrup. La intención de su creación fue extender al lenguaje de programación C mecanismos que permiten la manipulación de objetos. En ese sentido, desde el punto de vista de los lenguajes orientados a objetos, el C++ es un lenguaje híbrido.  [Wikipedia](https://https://es.wikipedia.org/wiki/C%2B%2B)

## Tabla de contenidos

- [Bjarne Stroustrup](#bjarne-stroustrup)
- [Temario](#temario)
- [Guía de usuario](#guía-de-usuario)
- [Guía de instalación](#guía-de-instalación)
- [Cómo contribuir](#cómo-contribuir)
- [Código de conducta](#código-de-conducta)
- [Autor/es](#autores)
- [Información adicional](#información-adicional)
- [Licencia](#licencia)
- [Limitación de responsabilidades - Solo BID](#limitación-de-responsabilidades)

## Bjarne Stroustrup
---
<div align="center"><img src="./images/stroustrup1.jpg"></div>

<p> Stroustrup escribió también el considerado por muchos como el texto introductorio de referencia para el lenguaje, su título original es The C++ Programming Language, el cual alcanza actualmente su cuarta edición. Existe una versión especial editada en 2000, aunque no figuran en ella cambios significativos respecto al original. Este último texto ha sido revisado tanto para reflejar la evolución del lenguaje, como el trabajo del comité de estándares de C++. </p>
<br>

| Características de C++                | 
| ------------------------------------- | 
| Su sintaxis es heredada del lenguaje C | 
| Programa orientado a objetos (POO) | 
| Permite la agrupación de instrucciones | 
| Lenguaje muy didáctico, con este lenguaje puedes aprender muchos otros lenguajes con gran facilidad. | 
| Es portátil y tiene un gran número de compiladores en diferentes plataformas y sistemas operativos. |
| Permite la separación de un programa en módulos que admiten compilación independiente | 
| Es un lenguaje de alto nivel | 

## Temario

| Numeracion   | Check  |Temas          |
| ------------ |--------|-------------- |
| 1     |✔️ | Introduccion y Entrada-Salidaa          |
| 2     |✔️ | Expresiones y Operadores          |
| 3     |✔️ | Condicionales          |
| 4     |✔️ | Bucles o Ciclos          |
| 5     |✔️ | Arreglos          |
| 6     |✔️ | Matrices o Tablas          |
| 7     |    | Cadenas          |
| 8     |    |Metodos de Ordenamiento          |
| 9     |    |Busqueda          |
| 10    |    |Punteros          |
| 11    |    |Funciones          |
| 12    |    |Estructura de  Datos         |
| 13    |    |Pilas         |
| 14    |    |Colas         |
| 15    |    |Listas         |
| 16    |    |Arboles         |
| 17    |    |Archivos         |
| 18    |    |POO: Clases y Objetos         |
| 19    |    |POO: Clases derivadas - Herencia y Polimorfismo       |
| 20    |    |Genericidad        |
| 21    |    |Genericidad - Plantillas       |
| 22    |    |Analisis e Eficiencia de Algoritmos        |
| 23    |    |Algoritmo Recursivo        |
| 24    |    |Bibliotecas Estandar de Plantillas (STL)        |
| 25    |    |Embebidos        |
| 26    |    |Interfaz Grafica        |
| 26    |    |Juegos        |

![python](./images/demo1.gif)

### Ejemplo
A continuación se cita un programa de ejemplo [hola mundo](https://es.wikipedia.org/wiki/Hola_mundo)  escrito en C++:

```
#include <iostream>

using namespace std;

int main()
{
    cout << "Hola mundo" << endl;
    return 0;
}
```

### Tipo de datos

C++ tiene los siguientes tipos fundamentales:


| Types                               | Description          |
| ----------------------------------- | -------------------- |
| `char`          | Caracteres.                                      |
| `short`, `int`, `long`, `long long`   | Enteros.                   |
| `float`, `double`, `long double`      | Números en coma flotante.  |
| `bool`                                | Booleanos.                 |
| `void`                                | Vacío.                     |

El modificador `unsigned` se puede aplicar a enteros para obtener números sin signo (por omisión los enteros contienen signo), con lo que se consigue un rango mayor de números naturales.


### Instalacion en Visual Studio Code
Descargar los siguintes archivos:<br>
📦 [Install Mingw-w64](http://mingw-w64.org/doku.php) Instalador del mingw-w64.<br>

```
c++ --version
```

```
g++ --version
```
<!-- use less words -->

-   Seleccion la imagen para hacer acercamiento

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/cmd.PNG width=700 height=150>

📦 [Install VS Code](https://code.visualstudio.com/) Instalador de Visual Studio Code.<br>

```
code --version
```
-   ✔ Seleccion la imagen para hacer acercamiento (IntelliSense, debugging, and code browsing.)

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/code.PNG width=800 height=80>

⚙ Configuración

-   ✔ Instalacion de la Extencion de Visual Studio code: C/C++

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/Instalar_c++.gif>

-   ✔ Instalacion de la Extencion Code Runner (C, C++, Java, JavaScript, PHP, Python...)

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/code_runner.gif>


-   ✔ Instalacion de la Extencion C++ Intelisense (C/C++ Intellisense with the help of GNU Global tags)

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/c++intellisense.gif>

-   Configuracion de Code Runner

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/configuracion.gif>


### Intalacion en Visual Studio
 
📦 [Install Visual Studio](https://visualstudio.microsoft.com/es/) Instalador de Visual Studio IDE.<br>

## Autores ✒️

* **Brian Marquez** - *Documentación* - [Brian Marquez]()

-   Ejecucion

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/run.gif>

## Instalacion en Visual Studio - C++/CLR

📦 [Install CLR](https://marketplace.visualstudio.com/items?itemName=RichardKaiser.CppWinformsVS2019VSIX001) Instalador de C++/CLR Visual Studio

<P> Incluye Creación de Proyectos en c++, implantación de Interfaz Grafica y Deploy.
Esta extensión extiende los proyectos de Visual Studio por C ++ Windows Forms . Las aplicaciones creadas por tales proyectos tienen una interfaz gráfica de usuario. Para más detalles, ver aquí . Los proyectos de formularios C ++ de Windows son una manera fácil de crear programas con una interfaz gráfica de usuario en C ++. El lenguaje de programación es C ++ para la lógica de negocios y C ++ / CLI (un dialecto C ++) para la interfaz gráfica de usuario. Los proyectos de C ++ Windows Forms son excelentes para aprender C ++. Visual C ++ para Windows Forms tiene casi todas las características estándar del lenguaje C ++ (C ++ 11 / C ++ 14 / C ++ 17). Como los programas no están restringidos a una consola simple para la interacción del usuario, son más atractivos, más flexibles y mucho más fáciles de usar. </P>

## CLR

```
textBox1->AppendText("Hello World");
```
## Requerimientos
Utilizando Interfas Grafica

- Configuracion de Interfaz: Sistema

<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/configuracion/configure1.png>

- Configuracion de Interfaz: Avanzado
<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/configuracion/configure2.png>

- Ejemplo
<img src=https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/images/graphics.png>

## Spotify
Music C++ [List on Spotify](https://open.spotify.com/playlist/5WeJBsezZBzGxr3bI0k68e?si=-ZU7O8zrSp-7hQolKhZF4A)

## Book
Descargar Libro - [Cómo programar en C++, 9Ed](https://github.com/BrianMarquez3/C-Plus-Plus-Course/tree/master/Books)

<!--## Setup
_Link de Descarga_
<!--📦 [Install .EXE ](https://raw.githubusercontent.com/C-Plus-Plus-Course/Instalador/master/Instalador.msi) Graphic Basic Calculator.<br>
📦 [Install .EXE ](https://raw.githubusercontent.com/BrianMarquez3/C-Plus-Plus-Course/master/Instalador/GraphicBasicCalculadora.rar) Graphic Basic Calculator.<br>-->


