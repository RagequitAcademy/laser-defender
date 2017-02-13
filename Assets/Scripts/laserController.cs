using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class laserController : MonoBehaviour {

	public float projectileSpeed = 15f;
	public float damage = 100f;

	// Update is called once per frame
	void Update () {
		this.GetComponent<Rigidbody2D>().velocity = new Vector3 (0, projectileSpeed, 0);
	}

	public float GetDamage() {
		return damage;
	}

	public void Hit() {
		Destroy (gameObject);
	}
}
