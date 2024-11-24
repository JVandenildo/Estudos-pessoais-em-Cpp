# Estudos em C++

> [!IMPORTANT]
> Repositório para testar algoritmos/sintaxe de C++. E anotações da linguagem.

C++ é uma linguagem de programação generalista e de alta performance. Foi desenvolvida por Bjarne Stroustrup em Bell Labs, começando em 1'979. C++ é uma extensão da linguagem de programação C, adicionando features como classes, objetos, e exceções.

## Básico da Programação em C++

Alguns pontos básicos da programação em C++.

### Inclusão de Bibliotecas

Em C++, é usado a diretiva `#include` para incluir bibliotecas ou arquivos header em programas. Por exemplo, incluir a biblioteca padrão de entrada e saída:

```cpp
#include <iostream>
```

### Função Principal

O ponto de entrada de um programa C++ é a função `main`. Todo programa C++ deve ter uma função main. Exemplo:

```cpp
int main() {
    // código vem aqui

    return 0;
}
```

### Entrada e Saída

Para executar operações de entrada e saída no C++, são usados objetos nativos `std::cin` para entrada e `std::cout` para saída, disponíveis na biblioteca `iostream`. Um exemplo que lê um inteiro e printa seu valor:

```cpp
int main() {
    int number;
    std::cout << "Insira um número: ";
    std::cin >> number;
    std::cout << "Você inseriu: " << number << std::endl;

    return 0;
}
```

## Referências

- [isocpp.org](https://isocpp.org/);
- [Cpp Core Guide Lines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines);
- [google.github.io/styleguide/cppguide.html](https://google.github.io/styleguide/cppguide.html);
- [roadmap.sh/cpp](https://roadmap.sh/cpp);
- [learncpp.com/](https://www.learncpp.com/).

### Referências em artigos

### Referências em vídeos

- "[Bjarne Stroustrup: Why I Created C++ | Big Think](https://www.youtube.com/watch?v=JBjjnqG0BP8)", do canal [@bigthink](https://www.youtube.com/@bigthink);
- "[Tutorial de C++ para iniciantes - Curso Completo](https://youtu.be/vLnPwxZdW4Y?si=4C6B5UUAXWaQCu_i)" do canal [@freecodecamp](https://www.youtube.com/@freecodecamp).
