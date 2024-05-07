import math
import datetime, datedelta

def Soma():
    x = float(input("Digite o valor de x: "))
    y = float(input("Digite o valor de y: "))
    resultadoSoma = x + y
    print("Resultado da soma:", resultadoSoma)

def Subtracao():
    x = float(input("Digite o valor de x: "))
    y = float(input("Digite o valor de y: "))
    resultadoSubtracao = x - y
    print("Resultado da subtração:", resultadoSubtracao)

def Divisao():
    x = float(input("Digite o valor de x: "))
    y = float(input("Digite o valor de y: "))
    resultadoDivisao = x / y
    print("Resultado da divisão:", resultadoDivisao)

def Multiplicacao():
    x = float(input("Digite o valor de x: "))
    y = float(input("Digite o valor de y: "))
    resultadoMultiplicacao = x * y
    print("Resultado da multiplicação:", resultadoMultiplicacao)

def Potencia():
    x = float(input("Digite o valor de x: "))
    y = float(input("Digite o valor de y: "))
    resultadoPotencia = x ** y
    print("Resultado da potência:", resultadoPotencia)

def Raiz():
    x = float(input("Digite o valor de x: "))
    resultadoRaiz = x ** 0.5
    print("Resultado da raiz quadrada de", x, ":", resultadoRaiz)
    
def Fatorial():
    n = int(input("Digite um número inteiro positivo para calcular o fatorial: "))
    
    if n < 0:
        print("Erro: Não é possível calcular o fatorial de um número negativo.")
        return
    
    resultadoFatorial = 1
    for i in range(1, n + 1):
        resultadoFatorial *= i
    
    print("O fatorial de", n, "é:", resultadoFatorial)
    
def MDC():
    x = int(input("Digite o primeiro número: "))
    y = int(input("Digite o segundo número: "))
    
    # Implementação do algoritmo de Euclides para calcular o MDC
    while y != 0:
        x, y = y, x % y
    
    print("O máximo divisor comum (MDC) entre os dois números é:", abs(x))
    
def MMC():
    x = int(input("Digite o primeiro número: "))
    y = int(input("Digite o segundo número: "))
    
    # Função auxiliar para calcular o MDC
    def mdc(a, b):
        while b != 0:
            a, b = b, a % b
        return a
    
    # Fórmula do MMC usando o MDC
    mmc = abs(x * y) // mdc(x, y)
    
    print("O mínimo múltiplo comum (MMC) entre os dois números é:", mmc)
    
def RegraDeTres():
    print("Digite os valores conforme a proporção:")
    a = float(input("Primeiro valor (A): "))
    b = float(input("Segundo valor (B): "))
    c = float(input("Terceiro valor (C): "))
    
    # Verificando se algum dos valores é zero para evitar divisão por zero
    if a == 0 or b == 0 or c == 0:
        print("Erro: Não é possível calcular a regra de três com valores iguais a zero.")
        return
    
    # Calculando o valor desconhecido usando a proporção
    resultado = (c * b) / a
    
    print("O valor desconhecido é:", resultado)
    
def resolver_funcao(f, x):
    """
    Função para resolver uma função matemática f(x) dado um valor de x.

    Parâmetros:
    f (function): A função matemática f(x) a ser resolvida.
    x (float): O valor de x para o qual deseja-se encontrar o valor correspondente de f(x).

    Retorna:
    float: O valor correspondente de f(x) para o valor dado de x.
    """
    try:
        resultado = f(x)
        return resultado
    except Exception as e:
        return f"Erro ao resolver a função: {str(e)}"

def area():
    x = float(input("Digite o x:"))
    y = float(input("Digite o y:"))
    
    resultadoArea = ((x) * (y))
    print("Resultado da area: " , resultadoArea)
    
def calcular_porcentagem(valor_total, percentual):
    return (valor_total * percentual) / 100

def encontrar_percentual(valor_parcial, valor_total):
    return (valor_parcial / valor_total) * 100

while True:
    print("-------- Calculadora-------\n\n Métodos:\n1- Soma\n2- Subtração\n3- Divisão\n4- Multiplicação\n5- Potência\n6- Raiz Quadrada\n7- Fatorial\n8- MDC\n9- MMC\n10- Regra de três\n11- Resolver uma função matemática\n12- Calcular area\n13- Sair\nDigite o método que deseja realizar:")

    Escolha = int(input(" "))

    if Escolha == 1:
        Soma()
    elif Escolha == 2:
        Subtracao()
    elif Escolha == 3:
        Divisao()
    elif Escolha == 4:
        Multiplicacao()
    elif Escolha == 5:
        Potencia()
    elif Escolha == 6:
        Raiz()
    elif Escolha == 7:
        Fatorial()
    elif Escolha == 8:
        MDC()
    elif Escolha == 9:
        MMC()
    elif Escolha == 10:
        RegraDeTres()
    elif Escolha == 11:
        expressao = input("Digite a expressão matemática (usando 'x' como a variável independente): ")
        valor_x = float(input("Digite o valor de x: "))
        
        try:
            def funcao(x):
                return eval(expressao)
            resultado = resolver_funcao(funcao, valor_x)
            print("O valor de f(x) para x =", valor_x, "é:", resultado)
        except Exception as e:
            print("Erro ao resolver a função:", str(e))
            
    elif Escolha == 12:
        area()
        
    elif Escolha == 13:
        valor_total = float(input("Digite o valor total: "))
        percentual = float(input("Digite o percentual: "))
    elif Escolha == 13:
        print("Saindo...")
        break
    else:
        print("Escolha inválida. Por favor, escolha um número de 1 a 12 para selecionar uma operação.")
        
        