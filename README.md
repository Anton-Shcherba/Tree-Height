# Tree-Height
Вычислить высоту данного дерева
### Вход 
Корневое дерево с вершинами {0, . . . , n−1}, заданное
как последовательность parent0
, . . . , parentn−1
, где parenti —
родитель i-й вершины.
### Выход
Высота дерева.
### Формат входа
Первая строка содержит натуральное число n. Вторая
строка содержит n целых чисел parent0
, . . . , parentn−1
. Для каждого 0 ≤ i ≤ n−1, parenti — родитель вершины i; если parenti = −1,
то i является корнем. Гарантируется, что корень ровно один. Гарантируется, что данная последовательность задаёт дерево.  
### Формат входа
Высота дерева.
### Ограничения
1 ≤ n ≤ 10^5
### Пример 

>5  
4 -1 4 1 1    
**3**  
5  
-1 0 4 0 3   
**4**   
10  
9 7 5 5 2 9 9 9 2 -1  
**4**
