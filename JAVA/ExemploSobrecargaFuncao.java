class Produto {
    String nome;
    double preco;

    public Produto(String nome, double preco) {
        this.nome = nome;
        this.preco = preco;
    }

    public double calcularPrecoFinal( double percentual ) {
        return this.preco-(this.preco*percentual/100);
    }

     public double calcularPrecoFinal( double percentual , double frete ) {
        return this.preco-(this.preco*percentual/100) + frete;
    }

    public double calcularPrecoFinal( String cupom ) {
        if ( cupom.equalsIgnoreCase("PROMO20") ) {
            return this.preco * 0.8;
        }
        if ( cupom.equalsIgnoreCase("PROMO30") ) {
            return this.preco * 0.7;
        }
        return this.preco;
    }
}

public class ExemploSobrecargaFuncao {
    public static void main(String[] args) { 
        double precoFinal; 

    Produto p1 = new Produto( "Teclado", 150.00 );

    precoFinal = p1.calcularPrecoFinal( 20.00 );
    System.out.println("\nValor final: " + precoFinal );

        precoFinal = p1.calcularPrecoFinal( "PROMO20" );
    System.out.println("\nValor final: " + precoFinal );
    }

}