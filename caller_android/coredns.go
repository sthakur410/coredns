package caller

//go:generate go run directives_generate.go
//go:generate go run owners_generate.go

import (
	_ "github.com/coredns/coredns/core/plugin" // Plug in CoreDNS.
	"github.com/coredns/coredns/coremain"
)

func Main() {
	coremain.Run()
}
