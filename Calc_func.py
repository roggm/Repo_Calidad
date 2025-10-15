"""
Calculadora Mejorada
"""

def validar_numero(valor):
    """Convierte el valor a número o lanza error"""
    try:
        return float(valor)
    except (ValueError, TypeError) as exc:
        raise ValueError(f"'{valor}' no es un número válido") from exc


def sumar(a, b):
    """Suma dos números"""
    num1 = validar_numero(a)
    num2 = validar_numero(b)
    return num1 + num2


def restar(a, b):
    """Resta dos números"""
    num1 = validar_numero(a)
    num2 = validar_numero(b)
    return num1 - num2


def multiplicar(a, b):
    """Multiplica dos números"""
    num1 = validar_numero(a)
    num2 = validar_numero(b)
    return num1 * num2


def dividir(a, b):
    """Divide dos números"""
    num1 = validar_numero(a)
    num2 = validar_numero(b)
    if num2 == 0:
        raise ValueError("No se puede dividir entre cero")
    return num1 / num2


def calcular():
    """Interfaz simple de la calculadora"""
    print("CALCULADORA")
    print("Operaciones: +, -, *, /")
    try:
        # Entrada de números
        num1 = input("Primer número: ")
        operacion = input("Operación (+, -, *, /): ")
        num2 = input("Segundo número: ")

        # Realizar cálculo
        if operacion == '+':
            resultado = sumar(num1, num2)
        elif operacion == '-':
            resultado = restar(num1, num2)
        elif operacion == '*':
            resultado = multiplicar(num1, num2)
        elif operacion == '/':
            resultado = dividir(num1, num2)
        else:
            print("Operación no válida")
            return
        # Mostrar resultado
        print(f"Resultado: {resultado}")
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    calcular()
