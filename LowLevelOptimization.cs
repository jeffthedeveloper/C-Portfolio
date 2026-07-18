using System;

// Requer "Allow unsafe code" habilitado no projeto (.csproj)
public unsafe class LowLevelOptimization
{
    /*
     * Demonstração de manipulação direta de memória.
     * Útil em cenários de alta performance (Games/Engines) 
     * onde o Garbage Collector deve ser evitado em ciclos críticos.
     */
    public static void ProcessBufferDirectly(int* data, int size)
    {
        for (int i = 0; i < size; i++)
        {
            // Acesso direto ao endereço de memória (Hardware-level)
            data[i] = data[i] * 2;
        }
    }
}
