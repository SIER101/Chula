clearItems()
populatePersonDropdown()

function test()
{
    document.querySelector("#member-list").children[1].remove();
}

function clearItems() {
    let tableBody = document.querySelector("#itemlist-table tbody");
    let length = tableBody.children.length
    for (let i = 0; i < length; i++) {
        tableBody.children[0].remove();
    }
}

function populatePersonDropdown() {
    let memberList = document.getElementById("member-list");
    let personSelect = document.getElementById("person-select");
    for (let i = 0; i < memberList.children.length; i++) {
        let optionName = document.createElement("option");
        optionName.value = memberList.children[i].textContent;
        optionName.innerText = memberList.children[i].textContent;
        personSelect.appendChild(optionName);
    }
}

let addButton = document.querySelector("#addbutton")
addButton.addEventListener("click", clickAdd)

function clickAdd(event) {
    const tableBody = document.querySelector("#itemlist-table tbody");
    const newItem = document.createElement("tr");
    const itemName = document.createElement("td");
    itemName.textContent = document.getElementById("itemname-input").value;
    const buyerName = document.createElement("td");
    buyerName.textContent = document.getElementById("person-select").value;;
    const price = document.createElement("td");
    price.textContent = document.getElementById("price-input").value;
    const oper = document.createElement("td");
    const button = document.createElement("button");
    button.textContent = "ลบ";
    button.classList = "deletebutton";
    button.onclick = function () { this.parentNode.parentNode.remove(); };
    oper.appendChild(button);
    newItem.appendChild(itemName);
    newItem.appendChild(buyerName);
    newItem.appendChild(price);
    newItem.appendChild(oper);
    tableBody.appendChild(newItem);
}