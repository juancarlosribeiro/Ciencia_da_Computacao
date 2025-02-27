import threading
import time

def tarefa():
    print("Inicio...")
    time.sleep(2)
    print("Fim...")

    tA = threading.Thread(target=tarefa)
    tB = threading.Thread(target=tarefa)

    tA.start()
    tA.join()
    tB.start()
    tB.join()

    print("Thread principal finalizada")