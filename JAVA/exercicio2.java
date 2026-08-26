import java.util.Scanner;
public class exercicio2 {
    public static void main(String[] args) {
        
        int numero;
        int contador = 0;
        int soma = 0;
        float media;
        boolean digitou28 = false;

        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite os numeros para contagem (Para encerrar digite '0')");
        numero = teclado.nextInt();

        while (numero != 0) {
            if (numero == 28) {
                digitou28 = true;
            }

            contador++;
            soma += numero;

            System.out.println("Continue digitando (Ou digite '0' para encerrar)");
            numero = teclado.nextInt();

            }

             System.out.println("Quantidade de numeros digitados: " + contador);
             System.out.println("Soma dos valores digitados:" + soma);

             media = (soma) / (contador);

             System.out.println("A media aritmetica eh:" + media);

             if (digitou28 == true) {
                System.out.println("O numero 28 foi digitado");
             }
                else {
                    System.out.println("O numero 28 nao foi digitado");
                }




    teclado.close();
    }
}
