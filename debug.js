class CheeseBurger {
  constructor() {
      this.type = 'CheeseBurger';
  }
}

class DeluxeCheeseBurger {
  constructor() {
      this.type = 'DeluxeCheeseBurger';
  }
}

class VeganBurger {
  constructor() {
      this.type = 'VeganBurger';
  }
}

const TYPES = {
  CHEESE: true,
  DELUXE: false,
  VEGAN: false
};

let burger;

if (TYPES.CHEESE) {
  burger = new CheeseBurger();
} else if (TYPES.DELUXE) {
  burger = new DeluxeCheeseBurger();
} else if (TYPES.VEGAN) {
  burger = new VeganBurger();
}

console.log(burger);