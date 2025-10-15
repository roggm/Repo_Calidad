"""
Calculadora Mejorada
Versión refactorizada aplicando principios de Clean Code.
"""

def validar_numero(valor):
    """Intenta convertir el valor a número; lanza un ValueError si no es válido."""
    try:
        return float(valor)
    except (ValueError, TypeError) as error:
        raise ValueError(f"'{valor}' no es un número válido") from error


def validar_operacion(func):
    """Decorador que valida que ambos parámetros sean numéricos antes de ejecutar la operación."""
    def wrapper(a, b):
        num1 = validar_numero(a)
        num2 = validar_numero(b)
        return func(num1, num2)
    return wrapper


@validar_operacion
def sumar(a, b):
    """Devuelve la suma de dos números."""
    return a + b


@validar_operacion
def restar(a, b):
    """Devuelve la resta de dos números."""
    return a - b


@validar_operacion
def multiplicar(a, b):
    """Devuelve la multiplicación de dos números."""
    return a * b


@validar_operacion
def dividir(a, b):
    """Devuelve la división de dos números; lanza error si el divisor es cero."""
    if b == 0:
        raise ValueError("No se puede dividir entre cero.")
    return a / b


def obtener_datos_usuario():
    """Solicita al usuario los datos necesarios para realizar una operación."""
    num1 = input("Primer número: ")
    operacion = input("Operación (+, -, *, /): ")
    num2 = input("Segundo número: ")
    return num1, operacion, num2


def calcular_operacion_usuario():
    """Controla el flujo de la calculadora: entrada, operación y salida."""
    print("=== CALCULADORA ===")
    print("Operaciones disponibles: +, -, *, /")
    
    num1, operacion, num2 = obtener_datos_usuario()

    try:
        operaciones = {
            '+': sumar,
            '-': restar,
            '*': multiplicar,
            '/': dividir
        }

        if operacion not in operaciones:
            print("Operación no válida.")
            return

        resultado = operaciones[operacion](num1, num2)
        print(f"Resultado: {resultado}")

    except ValueError as error:
        print(f"Error: {error}")


if __name__ == "__main__":
    calcular_operacion_usuario()
