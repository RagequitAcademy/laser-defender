using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class laserController : MonoBehaviour {

	public float projectileSpeed = 15f;

	// Update is called once per frame
	void Update () {
		this.GetComponent<Rigidbody2D>().velocity = new Vector3 (0, projectileSpeed, 0);
	}
}
