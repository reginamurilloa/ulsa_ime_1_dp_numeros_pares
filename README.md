# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
Este programa me serviria para separar terminos o alguna otra cosa que necesitamos distinguir y sean más facil de esta manera ya que e programa nos ayudaria a esto

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 numeros enteros

**Salidas:**
1. separar los numeros pares en un arreglo
2. los nuemeros impares los descarte

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- no aceptar numeros con decimales

**Tamaño del arreglo y por qué** (piensa en el peor caso):
debe ser un tamaño de 5, en caso de que todos los numeros llegaran a ser pares, para que todos queden dentro del codigo

**¿El 0 y los negativos son pares? ¿Por qué?**
El 0 si es numero par ya que si se puede dividir entre dos, los negativos tambien tienen pares

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Va a descartar los numeros impares y solo poner a los pares en un arreglo 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8,2 | 1,2 |
| 2 | 6,7,9,10,3 | 6,10 | 1,2 |
| 3 | 80,20,5,2,11 | 80,20,2 | 1,2,3 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** no

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_numeros_pares % g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_numeros_pares % ./numeros_pares
Guardar los numeros pares  5 numeros
Escribe un numero: 2
Escribe un numero: 7
Escribe un numero: 22
Escribe un numero: 30
Escribe un numero: 0
Los pares encontrados son: 4 numeros pares
Valores: 2 22 30 0 %  

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
Guardar los numeros pares  5 numeros
Escribe un numero: 3
Escribe un numero: 8
Escribe un numero: 5
Escribe un numero: 2
Escribe un numero: 7
Los pares encontrados son: 2 numeros pares
Valores: 8 2 %  

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**

Aparece porque el arreglo tenia la memoria reservada , pero no todas las posiciones fueron ocupadas
pares[0] = basura 
pares[1] = 8
pares[2] = basura
pares[3] = 2
pares[4] = basura

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 numeros pares, Valores: 2 4  | si |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | 2 numeros pares, Valores 8 2 | si |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | 5 numeros pares, Valores 2 4 6 8 10  | si |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 numeros pares | si |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | 2 numeros pares, valores 0 -4 | si |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | Entrada no valida. Escribe numero entero | si |
| Caso propio 1 | 20,10,7,1,0 | 3 pares: 20, 10, 0| 3 numeros pares, valores: 20 10 0 | si |
| Caso propio 2 | 1,3,80,5,2 | 2 pares: 80, 2 | 2 numeros pares, valores: 80 2 | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | me falto definir variable totalPares | la defini | si, de esa manera funciono el codigo adecuadamente |


## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| en este momento ninguna |  

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Lo importante que es definir una variable para llevar acabo el codigo y definir lo que voy a hacer en el codigo

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
tener con mayor claridad que quiero para el codigo

**¿Qué fue lo más difícil y cómo lo resolví?**
agregar el for, pero luego lo regrese al original on while

**¿Qué pregunta me quedó sin responder?**
ninguna

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
Porque el contador del ciclo cuenta todos los números leídos, no solo los pares. Si lo usara como posición, dejaría huecos en el arreglo.

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom