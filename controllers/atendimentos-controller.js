const Atendimento = require('../models/Atendimento.js')

module.exports = app => {
    app.get('/atendimentos', (req, res) => {
		Atendimento.lista(res)
	})
	
    app.get('/atendimentos/:id', (req, res) => {
        const id = parseInt(req.params.id)

        Atendimento.buscaPorId(id, res)
    })
    app.post('/atendimentos', (req, res) => {
        const atendimento1 = req.body
        Atendimento.adiciona(atendimento1, res) 
    })
	
	app.patch('/atendimentos/:id', (req, res) => {
		
		const id = parseInt(req.params.id)
		const valores = req.body
		
		Atendimento.altera(id, valores, res)
	})
	
	app.delete('/atendimentos/:id', (req, res) => {
		const id = parseInt(req.params.id)
		
		Atendimento.deleta(id, res)

	})
}