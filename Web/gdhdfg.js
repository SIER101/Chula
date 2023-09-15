let id = 0;

let nameList = [
    "-- เลือกผู้ฝากซื้อ --",
    "Pannavich Tanyavichitkul",
    "Sakepisit Maysamat",
    "Tinna Nillapong",
    "Kittiphop Khankaew",
    "Poomrapee Charoensak",
];

0
1
2
3
4
5


let a =[];

a = [[a,5],[b,3]];


a = [[a,5,54,41],[b,3]];

a.splice(id,1);

a.push([document.getElementById("item-to-add").value,document.getElementById("price-to-add").value]);

const dropdown = document.getElementById("name-to-add");

for (let i = 0; i < nameList.length; i++) {
    let option = document.createElement("option");
    option.text = nameList[i];
    dropdown.appendChild(option);
}

document.addEventListener("DOMContentLoaded", function () {
    const addItemButton = document.getElementById("add-newrow");
    addItemButton.addEventListener("click", addListItem);
    id=0
});

function addListItem() {
    const itemList = document.getElementById("itemList");
    const newItem = document.createElement("tr");
    newItem.id = id;
    id++;
    const itemName = document.createElement("td");
    itemName.textContent = a[i][0];
    const buyerName = document.createElement("td");
    buyerName.textContent = a[i][1];
    const price = document.createElement("td");
    price.textContent = document.getElementById("price-to-add").value;
    const oper = document.createElement("td");
    const butto = document.createElement("button");
    butto.textContent = "ลบ";
    butto.classList = "delete-row";
    butto.onclick = function () { this.parentNode.parentNode.remove(); };
    oper.appendChild(butto);
    newItem.appendChild(itemName);
    newItem.appendChild(buyerName);
    newItem.appendChild(price);
    newItem.appendChild(oper);
    itemList.appendChild(newItem);
    tbody.innerHTML="";
}