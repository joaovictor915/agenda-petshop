const customExpress = require('./config/customExpress')
const conexao = require('./infraestrutura/conexao')
const Tabelas = require('./infraestrutura/Tabelas')
conexao.connect(erro => {
    if(erro){
        console.log(erro)
    }else{
        console.log('Conexao com o banco bem sucedida...')
        Tabelas.init(conexao)
        const app = customExpress()

        app.listen(3000, () => console.log('servidor na porta 3000'))
    }
})


