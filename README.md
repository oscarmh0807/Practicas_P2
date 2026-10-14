# Practicas_P2

**Estudiante:** Oscar Miguel Huitrón Zenteno  
**Materia:** Programación Orientada a Objetos  
**Institución:** Universidad Autónoma de Guadalajara (UAG)  
**Maestro:** Manuel Balderas Victoria  
**Lenguaje:** C++  

-----------------------------------------------------------

## Descripción del Repositorio

Este repositorio contiene la solución a los 5 ejercicios prácticos correspondientes al **Segundo Parcial**. El objetivo de estas prácticas es poner en práctica los pilares avanzados de la Programación Orientada a Objetos en **C++**, abordando conceptos clave como **herencia**, **polimorfismo dinámico y estático**, **sobrecarga de operadores**, **sobrecarga de métodos** y el **uso explícito de iteradores** para el manejo de colecciones de objetos.

-----------------------------------------------------------

## Estructura del Proyecto

Cada ejercicio se encuentra organizado dentro de su propia carpeta individual, conteniendo su respectivo archivo fuente (`.cpp`):

Practicas_P2/
├── .gitignore                         # Configuración para omitir ejecutables (.exe)
├── README.md                          # Documentación del proyecto
├── SimpleHierarchy/
│   └── 01_Simple_Hierarchy.cpp        # Ejercicio 1: Jerarquía simple (Vehiculo, Auto, Motocicleta)
├── Polymorphism/
│   └── 02_Polymorphism.cpp            # Ejercicio 2: Polimorfismo en acción (Colección con punteros)
├── OperatorOverloading/
│   └── 03_Operator_Overloading.cpp    # Ejercicio 3: Sobrecarga de operadores (Clase Fraccion +, ==)
├── MethodOverloading/
│   └── 04_Method_Overloading.cpp      # Ejercicio 4: Sobrecarga de métodos (Clase Calculadora sumar())
└── IteratorCollection/
    └── 05_Collection_Iterator.cpp     # Ejercicio 5: Colección con iterador (std::vector y const_iterator)

-----------------------------------------------------------

## Resumen de Ejercicios
01 - SimpleHierarchy (01_Simple_Hierarchy.cpp): Definición de una clase base Vehiculo y clases derivadas Auto y Motocicleta, redefiniendo el método mostrarInfo() con atributos específicos de cada subclase.

02 - Polymorphism (02_Polymorphism.cpp): Demostración de polimorfismo mediante una colección dinámica de punteros Vehiculo*, ejecutando comportamientos específicos en tiempo de ejecución.

03 - OperatorOverloading (03_Operator_Overloading.cpp): Implementación de la clase Fraccion con sobrecarga del operador + para la suma de fracciones y del operador == para evaluar equivalencias algebraicas.

04 - MethodOverloading (04_Method_Overloading.cpp): Implementación de la clase Calculadora demostrando polimorfismo estático mediante tres versiones sobrecargadas del método sumar() (2 enteros, 3 enteros y 2 decimales).

05 - IteratorCollection (05_Iterator_Collection.cpp): Agrupación de objetos Vehiculo dentro de un contenedor iterable (std::vector) y recorrido de sus elementos utilizando explícitamente un const_iterator.

-----------------------------------------------------------

## Declaración del Uso de IA
De acuerdo con los lineamientos de la rúbrica de la materia, se declara el uso de Inteligencia Artificial durante el desarrollo de estas prácticas bajo el siguiente alcance:

Asistencia en la resolución de dudas puntuales de sintaxis en C++, como el uso de std::gcd para la simplificación de fracciones y el manejo explícito de std::vector::const_iterator.

Orientación en la estructuración de carpetas independientes, control de versiones en Git/GitHub mediante commits descriptivos y la confección del reporte de entrega.

Creación del README, creación de ejemplos y conflictos con errores de código fueron hechos mediante búsquedas en internet 
y poco apoyo de la IA.

La lógica del diseño de clases, la jerarquía de herencia, las pruebas de ejecución y la depuración del código fueron realizadas de manera autónoma.